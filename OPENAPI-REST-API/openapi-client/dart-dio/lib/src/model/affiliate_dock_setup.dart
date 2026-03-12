//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'affiliate_dock_setup.g.dart';

/// Affiliate Landing Page information.
///
/// Properties:
/// * [affiliateDockTitle] 
/// * [affiliateDockDescription] 
/// * [referrerCoupon] 
@BuiltValue()
abstract class AffiliateDockSetup implements Built<AffiliateDockSetup, AffiliateDockSetupBuilder> {
  @BuiltValueField(wireName: r'affiliate_dock_title')
  String? get affiliateDockTitle;

  @BuiltValueField(wireName: r'affiliate_dock_description')
  String? get affiliateDockDescription;

  @BuiltValueField(wireName: r'referrer_coupon')
  String? get referrerCoupon;

  AffiliateDockSetup._();

  factory AffiliateDockSetup([void updates(AffiliateDockSetupBuilder b)]) = _$AffiliateDockSetup;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(AffiliateDockSetupBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<AffiliateDockSetup> get serializer => _$AffiliateDockSetupSerializer();
}

class _$AffiliateDockSetupSerializer implements PrimitiveSerializer<AffiliateDockSetup> {
  @override
  final Iterable<Type> types = const [AffiliateDockSetup, _$AffiliateDockSetup];

  @override
  final String wireName = r'AffiliateDockSetup';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    AffiliateDockSetup object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    if (object.affiliateDockTitle != null) {
      yield r'affiliate_dock_title';
      yield serializers.serialize(
        object.affiliateDockTitle,
        specifiedType: const FullType(String),
      );
    }
    if (object.affiliateDockDescription != null) {
      yield r'affiliate_dock_description';
      yield serializers.serialize(
        object.affiliateDockDescription,
        specifiedType: const FullType(String),
      );
    }
    if (object.referrerCoupon != null) {
      yield r'referrer_coupon';
      yield serializers.serialize(
        object.referrerCoupon,
        specifiedType: const FullType(String),
      );
    }
  }

  @override
  Object serialize(
    Serializers serializers,
    AffiliateDockSetup object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required AffiliateDockSetupBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'affiliate_dock_title':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.affiliateDockTitle = valueDes;
          break;
        case r'affiliate_dock_description':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.affiliateDockDescription = valueDes;
          break;
        case r'referrer_coupon':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.referrerCoupon = valueDes;
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  AffiliateDockSetup deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = AffiliateDockSetupBuilder();
    final serializedList = (serialized as Iterable<Object?>).toList();
    final unhandled = <Object?>[];
    _deserializeProperties(
      serializers,
      serialized,
      specifiedType: specifiedType,
      serializedList: serializedList,
      unhandled: unhandled,
      result: result,
    );
    return result.build();
  }
}

