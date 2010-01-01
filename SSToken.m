//
//  BNToken.m
//  Bird
//
//  Created by Steve Streza on 6/30/09.
//  Copyright 2009 __MyCompanyName__. All rights reserved.
//

#import "SSToken.h"


@implementation SSToken

@synthesize tokenBody, pin;

-(id)initWithHTTPResponseBody:(NSString *)body{
	self = [super initWithHTTPResponseBody:body];
	if(self){
		tokenBody = [body copy];

//		user = [BNTwitterUser userWithID:userID userName:screenName];
	}
	return self;
}

-(void)parseHTTPKey:(NSString *)paramKey body:(id)body{
	if ([paramKey isEqualToString:@"screen_name"]) {
		screenName = [body copy];
	}else if([paramKey isEqualToString:@"user_id"]){
//		userID = ((unsigned long long)[body longLongValue]);
	}else{
		[super parseHTTPKey:paramKey body:body];
	}
	
}

-(NSString *)verifier{
	return self.pin;
}

-(void)dealloc{
	[tokenBody release];
	tokenBody = nil;
	
	[screenName release];
	
	[super dealloc];
}

@end
