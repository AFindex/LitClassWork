//------------------------------------------------------------------------------
// <auto-generated>
//     This code was generated by a RdGen v1.07.
//
//     Changes to this file may cause incorrect behavior and will be lost if
//     the code is regenerated.
// </auto-generated>
//------------------------------------------------------------------------------
#ifndef BLUEPRINTHIGHLIGHTER_GENERATED_H
#define BLUEPRINTHIGHLIGHTER_GENERATED_H


#include "protocol/Protocol.h"
#include "types/DateTime.h"
#include "impl/RdSignal.h"
#include "impl/RdProperty.h"
#include "impl/RdList.h"
#include "impl/RdSet.h"
#include "impl/RdMap.h"
#include "base/ISerializersOwner.h"
#include "base/IUnknownInstance.h"
#include "serialization/ISerializable.h"
#include "serialization/Polymorphic.h"
#include "serialization/NullableSerializer.h"
#include "serialization/ArraySerializer.h"
#include "serialization/InternedSerializer.h"
#include "serialization/SerializationCtx.h"
#include "serialization/Serializers.h"
#include "ext/RdExtBase.h"
#include "task/RdCall.h"
#include "task/RdEndpoint.h"
#include "task/RdSymmetricCall.h"
#include "std/to_string.h"
#include "std/hash.h"
#include "std/allocator.h"
#include "util/enum.h"
#include "util/gen_util.h"

#include <cstring>
#include <cstdint>
#include <vector>
#include <ctime>

#include "thirdparty.hpp"
#include "../instantiations.h"

#include "UE4TypesMarshallers.h"
#include "Runtime/Core/Public/Containers/Array.h"
#include "Runtime/Core/Public/Containers/ContainerAllocationPolicies.h"

#pragma warning( push )
#pragma warning( disable:4250 )
#pragma warning( disable:4307 )
#pragma warning( disable:4267 )
#pragma warning( disable:4244 )
#pragma warning( disable:4100 )
/// <summary>
/// <p>Generated from: UE4Library.kt:181</p>
/// </summary>
namespace Jetbrains {
    namespace EditorPlugin {
        
        //data
        class RIDERLINK_API BlueprintHighlighter : public rd::IPolymorphicSerializable
        {
            
            //companion
            
            //custom serializers
            private:
            
            //constants
            public:
            
            //fields
            protected:
            int32_t begin_;
            int32_t end_;
            
            
            //initializer
            private:
            void initialize();
            
            //primary ctor
            public:
            BlueprintHighlighter(int32_t begin_, int32_t end_);
            
            //secondary constructor
            #ifdef __cpp_structured_bindings
                
                //deconstruct trait
                template <size_t I>
                decltype(auto) get() const
                {
                    if constexpr (I < 0 || I >= 2) static_assert (I < 0 || I >= 2, "I < 0 || I >= 2");
                    else if constexpr (I==0)  return static_cast<const int32_t&>(get_begin());
                    else if constexpr (I==1)  return static_cast<const int32_t&>(get_end());
                }
            #endif
            
            //default ctors and dtors
            
            BlueprintHighlighter() = delete;
            
            BlueprintHighlighter(BlueprintHighlighter const &) = default;
            
            BlueprintHighlighter& operator=(BlueprintHighlighter const &) = default;
            
            BlueprintHighlighter(BlueprintHighlighter &&) = default;
            
            BlueprintHighlighter& operator=(BlueprintHighlighter &&) = default;
            
            virtual ~BlueprintHighlighter() = default;
            
            //reader
            static BlueprintHighlighter read(rd::SerializationCtx& ctx, rd::Buffer & buffer);
            
            //writer
            void write(rd::SerializationCtx& ctx, rd::Buffer& buffer) const override;
            
            //virtual init
            
            //identify
            
            //getters
            int32_t const & get_begin() const;
            int32_t const & get_end() const;
            
            //intern
            
            //equals trait
            private:
            bool equals(rd::ISerializable const& object) const override;
            
            //equality operators
            public:
            friend bool operator==(const BlueprintHighlighter &lhs, const BlueprintHighlighter &rhs);
            friend bool operator!=(const BlueprintHighlighter &lhs, const BlueprintHighlighter &rhs);
            
            //hash code trait
            size_t hashCode() const noexcept override;
            
            //type name trait
            std::string type_name() const override;
            
            //static type name trait
            static std::string static_type_name();
            
            //polymorphic to string
            private:
            std::string toString() const override;
            
            //external to string
            public:
            friend std::string to_string(const BlueprintHighlighter & value);
        };
    };
};

//hash code trait
namespace rd {
    template <> struct hash<Jetbrains::EditorPlugin::BlueprintHighlighter> {
        size_t operator()(const Jetbrains::EditorPlugin::BlueprintHighlighter & value) const noexcept {
            return value.hashCode();
        }
    };
}
#ifdef __cpp_structured_bindings
    
    //tuple trait
    namespace std {
        template<>
        class tuple_size<Jetbrains::EditorPlugin::BlueprintHighlighter> : public integral_constant<size_t, 2> {};
        
        template<size_t I>
        class std::tuple_element<I, Jetbrains::EditorPlugin::BlueprintHighlighter> {
        public:
            using type = decltype (declval<Jetbrains::EditorPlugin::BlueprintHighlighter>().get<I>());
        };
        
    };
#endif

#pragma warning( pop )



#endif // BLUEPRINTHIGHLIGHTER_GENERATED_H
