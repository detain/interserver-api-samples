//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'domain_order_tld_services.g.dart';

/// Example map of TLDs to service IDs for domain ordering.
///
/// Properties:
/// * [periodAsia] - Service ID for .asia TLD
/// * [periodBe] - Service ID for .be TLD
/// * [periodBiz] - Service ID for .biz TLD
/// * [periodCa] - Service ID for .ca TLD
@BuiltValue()
abstract class DomainOrderTldServices implements Built<DomainOrderTldServices, DomainOrderTldServicesBuilder> {
  /// Service ID for .asia TLD
  @BuiltValueField(wireName: r'.asia')
  int? get periodAsia;

  /// Service ID for .be TLD
  @BuiltValueField(wireName: r'.be')
  int? get periodBe;

  /// Service ID for .biz TLD
  @BuiltValueField(wireName: r'.biz')
  int? get periodBiz;

  /// Service ID for .ca TLD
  @BuiltValueField(wireName: r'.ca')
  int? get periodCa;

  DomainOrderTldServices._();

  factory DomainOrderTldServices([void updates(DomainOrderTldServicesBuilder b)]) = _$DomainOrderTldServices;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(DomainOrderTldServicesBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<DomainOrderTldServices> get serializer => _$DomainOrderTldServicesSerializer();
}

class _$DomainOrderTldServicesSerializer implements PrimitiveSerializer<DomainOrderTldServices> {
  @override
  final Iterable<Type> types = const [DomainOrderTldServices, _$DomainOrderTldServices];

  @override
  final String wireName = r'DomainOrderTldServices';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    DomainOrderTldServices object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    if (object.periodAsia != null) {
      yield r'.asia';
      yield serializers.serialize(
        object.periodAsia,
        specifiedType: const FullType(int),
      );
    }
    if (object.periodBe != null) {
      yield r'.be';
      yield serializers.serialize(
        object.periodBe,
        specifiedType: const FullType(int),
      );
    }
    if (object.periodBiz != null) {
      yield r'.biz';
      yield serializers.serialize(
        object.periodBiz,
        specifiedType: const FullType(int),
      );
    }
    if (object.periodCa != null) {
      yield r'.ca';
      yield serializers.serialize(
        object.periodCa,
        specifiedType: const FullType(int),
      );
    }
  }

  @override
  Object serialize(
    Serializers serializers,
    DomainOrderTldServices object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required DomainOrderTldServicesBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'.asia':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(int),
          ) as int;
          result.periodAsia = valueDes;
          break;
        case r'.be':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(int),
          ) as int;
          result.periodBe = valueDes;
          break;
        case r'.biz':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(int),
          ) as int;
          result.periodBiz = valueDes;
          break;
        case r'.ca':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(int),
          ) as int;
          result.periodCa = valueDes;
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  DomainOrderTldServices deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = DomainOrderTldServicesBuilder();
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

