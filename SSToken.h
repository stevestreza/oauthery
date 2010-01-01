//
//  BNToken.h
//  Bird
//
//  Created by Steve Streza on 6/30/09.
//  Copyright 2009 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "OAToken.h"

@interface SSToken : OAToken {
	NSString *tokenBody;
	NSString *pin;
	
//	MGTwitterEngineID userID;
	NSString *screenName;
	
//	BNTwitterUser *user;
}
//@property (readonly) BNTwitterUser *user;
@property (copy) NSString *pin;
@property (readonly,nonatomic) NSString *tokenBody;
-(NSString *)verifier;
@end
