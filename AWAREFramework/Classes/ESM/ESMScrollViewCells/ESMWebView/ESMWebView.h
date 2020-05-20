//
//  ESMWebView.h
//  AWARE
//
//  Created by Yuuki Nishiyama on 2017/08/14.
//  Copyright © 2017 Yuuki NISHIYAMA. All rights reserved.
//

#import "BaseESMView.h"

@protocol WKWebViewDelegate <NSObject>

- (void) setDelegateViews: (id) delegateView;

@end

@interface ESMWebView : BaseESMView <WKWebViewDelegate>

@end
