//
//  OAuthery_AppDelegate.h
//  OAuthery
//
//  Licensed under the Apache License, Version 2.0 (the "License");
//  you may not use this file except in compliance with the License.
//  You may obtain a copy of the License at
//
//  http://www.apache.org/licenses/LICENSE-2.0
//
//  Unless required by applicable law or agreed to in writing, software
//  distributed under the License is distributed on an "AS IS" BASIS,
//  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
//  See the License for the specific language governing permissions and
//  limitations under the License.
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

-(void)authorizeWithRequestToken:(SSToken *)token;

@end
