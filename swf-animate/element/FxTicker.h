//
//  FxTicker.hpp
//
//  Created by joli on 2018/12/19.
//  Copyright © 2018 uzone. All rights reserved.
//

#ifndef FxTicker_hpp
#define FxTicker_hpp

#include "flashx/element/FxUnit.h"

#include "base/CCRef.h"
USING_NS_CC;

NS_FLASHX_BEGIN

/**
 * 动画心跳单元
 */
class FxTicker : public FxUnit, public Ref {
    
public:
    FxTicker();
    virtual ~FxTicker();
    
#if FX_USING_SCRIPT
    void setScriptTickHandler(FX_SCRIPT_FUNCTION scriptHandler = FX_SCRIPT_NONE_FUN);
#endif

    virtual void onTick();
    
    void retain() { Ref::retain(); };
    void release() { Ref::release(); };
    u32 getReferenceCount() const { return Ref::getReferenceCount(); }
    
private:
#if FX_USING_SCRIPT
    FX_SCRIPT_FUNCTION _scriptTickHandler;
#endif
};

NS_FLASHX_END /* NS_FLASHX_BEGIN */

#endif /* FxTicker_hpp */
