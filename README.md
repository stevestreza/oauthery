Overview
========

Twitter uses OAuth as its supported form of authentication. This is fine for some apps like clients where users need to authenticate themselves, but it doesn't work well for bots or scripts run by one person. If the bot needs an access token, it can be a real pain to obtain without writing the intermediate code.

This application, **OAuthery**, serves a simple purpose. You supply it the consumer key and secret for your OAuth application. It creates a request token and the URL for authorizing it. You complete the authorization in a web browser and get a PIN number. You then enter that PIN number back into the application, and it spits out your access key and secret. At this point, the user authentication is complete, and you can add those credentials to your script, and access API resources.

This is largely intended as a developer tool for people developing applications with Twitter's OAuth impelmentation. It also provides code to show exactly how to perform the authentication process with OAuth and Twitter, so that developers who wish to implement such functionality in their own apps can use this as reference.

Install
=======

Easy way: Download the .app from the Downloads section. No installation needed.

Hard way: Clone the repository, update the submodules, and build the application in Xcode.

Usage
=====

To use, you will first need an OAuth application registered with Twitter. To do this, go to the [OAuth Clients](https://twitter.com/oauth_clients) page on Twitter, and set up an application. Make sure you select "Client" for Application Type, which will use the PIN-based authentication flow. Once your application is set up, Twitter will provide you with two bits of data, the **consumer key** and the **consumer secret**.

At this point, you can use OAuthery to obtain an access token.

1. Add your **consumer key** and **consumer secret** to the first fields of OAuthery.
2. Click the **Get Request Token** button. This will fetch a new request token in the background. Once the token is obtained, it'll display the token in the Request Token field and open the authorize URL in your browser.
3. Allow the application access on the Twitter website.
4. Take the PIN number and add it in the PIN Number field in OAuthery.
5. Click the **Get Access Token** button. When the token is obtained, it'll display the access key and access secret in the appropriate fields.
6. Copy those fields to your application or script. You can then access protected API resources using those credentials instead of a username and password.

License
=======

Licensed under the Apache License, Version 2.0 (the "License"); you may not use this file except in compliance with the License. You may obtain a copy of the License at

http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software distributed under the License is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. See the License for the specific language governing permissions and limitations under the License.
