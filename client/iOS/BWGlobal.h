//
//  BWGlobal.h
//
//  Created by Andreas Linde on 08/17/10.
//  Copyright 2010 Andreas Linde. All rights reserved.
//
//  Permission is hereby granted, free of charge, to any person obtaining a copy
//  of this software and associated documentation files (the "Software"), to deal
//  in the Software without restriction, including without limitation the rights
//  to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
//  copies of the Software, and to permit persons to whom the Software is
//  furnished to do so, subject to the following conditions:
//
//  The above copyright notice and this permission notice shall be included in
//  all copies or substantial portions of the Software.
//
//  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
//  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
//  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
//  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
//  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
//  OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
//  THE SOFTWARE.

#import "BWHockeyController.h"

// uncomment this line to enable NSLog-debugging output
#define kHockeyDebugEnabled



// API defines - do not change
#define BETA_DOWNLOAD_TYPE_PROFILE	@"profile"
#define BETA_DOWNLOAD_TYPE_APP		  @"app"

#define BETA_UPDATE_RESULT		 @"result"
#define BETA_UPDATE_TITLE		   @"title"
#define BETA_UPDATE_SUBTITLE	 @"subtitle"
#define BETA_UPDATE_NOTES		   @"notes"
#define BETA_UPDATE_VERSION		 @"version"
#define BETA_UPDATE_TIMESTAMP	 @"timestamp"
#define BETA_UPDATE_APPSIZE		 @"appsize"

#define BETA_UPDATE_CHECK_STARTUP	0
#define BETA_UPDATE_CHECK_DAILY		1
#define BETA_UPDATE_CHECK_MANUAL	2

#define kDictionaryOfLastHockeyCheck @"DictionaryOfLastHockeyCheck"
#define kDateOfLastHockeyCheck			 @"DateOfLastHockeyCheck"
#define kHockeyAutoUpdateSetting		 @"HockeyAutoUpdateSetting"

#define kHockeyBundleName @"Hockey.bundle"


#ifdef kHockeyDebugEnabled
#define BWLog(fmt, ...) NSLog((@"%s/%d " fmt), __PRETTY_FUNCTION__, __LINE__, ##__VA_ARGS__);
#else
#define BWLog(...)
#endif
