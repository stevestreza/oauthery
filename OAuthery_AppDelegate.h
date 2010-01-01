//
//  OAuthery_AppDelegate.h
//  OAuthery
//
//  Created by Steve Streza on 12/28/09.
//  Copyright __MyCompanyName__ 2009 . All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import "OAuthConsumer.h"
#import "SSToken.h"

@interface OAuthery_AppDelegate : NSObject 
{
    NSWindow *window;
	NSTextField *consumerKeyField;
	NSTextField *consumerSecretField;

	NSTextField *requestTokenField;
	NSTextField *pinNumberField;

	NSTextField *accessKeyField;
	NSTextField *accessSecretField;

	OAConsumer *consumer;
	SSToken *requestToken;
	SSToken * accessToken;
}

@property (nonatomic, retain) IBOutlet NSWindow *window;
@property (nonatomic, retain) IBOutlet NSTextField *consumerKeyField;
@property (nonatomic, retain) IBOutlet NSTextField *consumerSecretField;

@property (nonatomic, retain) IBOutlet NSTextField *requestTokenField;
@property (nonatomic, retain) IBOutlet NSTextField *pinNumberField;

@property (nonatomic, retain) IBOutlet NSTextField * accessKeyField;
@property (nonatomic, retain) IBOutlet NSTextField * accessSecretField;

-(IBAction)getRequestToken:sender;
-(IBAction)getAccessToken:sender;

@end
