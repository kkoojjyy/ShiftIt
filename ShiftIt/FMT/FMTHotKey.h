/*
 Copyright (c) 2010-2011 Filip Krikava
 
 Permission is hereby granted, free of charge, to any person obtaining a copy
 of this software and associated documentation files (the "Software"), to deal
 in the Software without restriction, including without limitation the rights
 to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 copies of the Software, and to permit persons to whom the Software is
 furnished to do so, subject to the following conditions:
 
 The above copyright notice and this permission notice shall be included in
 all copies or substantial portions of the Software.
 
 THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 THE SOFTWARE.
 */

#import <Cocoa/Cocoa.h>
#import <Carbon/Carbon.h>

@interface FMTHotKey : NSObject {
	@private
	
	/**
	 * The virtual key code for the keyboard key associated with the receiving key event.
	 * 
	 * @see NSEvent keyCode
	 */
	NSInteger keyCode_;
	
	/** 
	 * Using the Cocoa modifiers
	 * 
	 * @see NSEvent for NS*KeyMask (i.e.: NSCommandKeyMask)
	 */
	NSUInteger modifiers_;
}

@property (readonly) NSInteger keyCode;
@property (readonly) NSUInteger modifiers;

- (id)initWithKeyCode:(NSInteger)keyCode modifiers:(NSUInteger)modifiers;

- (NSString *)description;
- (BOOL)isEqualTo:(id)object;

@end

#pragma mark Key code and modifiers conversion methods

NSString *FMTStringForCocoaModifiers(NSUInteger modifiers);
