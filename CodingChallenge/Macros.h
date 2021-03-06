//
//  Macros.h
//  CodingChallenge
//
//  Created by TekTak on 6/21/14.
//  Copyright (c) 2014 Namshi. All rights reserved.
//

/*
 *  This file contains List of important Macros defined here which will used throughout the whole application
 */

#pragma mark - BASICS

#define     SQLITE_FILE                         @"namshi.sqlite"
#define     UI_ALERT_OK(TITLE,MSG)              [[[UIAlertView alloc] initWithTitle:(TITLE) \
                                                message:(MSG) \
                                                delegate:nil \
                                                cancelButtonTitle:@"OK" \
                                                otherButtonTitles:nil] show]


#pragma mark - NAMSHI REST URLS

#define     BASE_NAMSHI_API_ADDRESS             @"http://api.namshi.com"
#define     PRODUCT_API_URL                     BASE_NAMSHI_API_ADDRESS @"/products/"
#define     TOAST_DURATION                      2.0

#define     TOAST_POSITION_CENTER               @"center"
