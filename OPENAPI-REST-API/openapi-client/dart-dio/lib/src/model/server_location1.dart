//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'server_location1.g.dart';

/// ServerLocation1
///
/// Properties:
/// * [locationId] 
/// * [locationName] 
/// * [locationLat] 
/// * [locationLong] 
/// * [locationDescription] 
/// * [locationIpmiGroup] 
@BuiltValue()
abstract class ServerLocation1 implements Built<ServerLocation1, ServerLocation1Builder> {
  @BuiltValueField(wireName: r'location_id')
  int get locationId;

  @BuiltValueField(wireName: r'location_name')
  String get locationName;

  @BuiltValueField(wireName: r'location_lat')
  String get locationLat;

  @BuiltValueField(wireName: r'location_long')
  String get locationLong;

  @BuiltValueField(wireName: r'location_description')
  String? get locationDescription;

  @BuiltValueField(wireName: r'location_ipmi_group')
  int? get locationIpmiGroup;

  ServerLocation1._();

  factory ServerLocation1([void updates(ServerLocation1Builder b)]) = _$ServerLocation1;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(ServerLocation1Builder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<ServerLocation1> get serializer => _$ServerLocation1Serializer();
}

class _$ServerLocation1Serializer implements PrimitiveSerializer<ServerLocation1> {
  @override
  final Iterable<Type> types = const [ServerLocation1, _$ServerLocation1];

  @override
  final String wireName = r'ServerLocation1';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    ServerLocation1 object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    yield r'location_id';
    yield serializers.serialize(
      object.locationId,
      specifiedType: const FullType(int),
    );
    yield r'location_name';
    yield serializers.serialize(
      object.locationName,
      specifiedType: const FullType(String),
    );
    yield r'location_lat';
    yield serializers.serialize(
      object.locationLat,
      specifiedType: const FullType(String),
    );
    yield r'location_long';
    yield serializers.serialize(
      object.locationLong,
      specifiedType: const FullType(String),
    );
    if (object.locationDescription != null) {
      yield r'location_description';
      yield serializers.serialize(
        object.locationDescription,
        specifiedType: const FullType(String),
      );
    }
    if (object.locationIpmiGroup != null) {
      yield r'location_ipmi_group';
      yield serializers.serialize(
        object.locationIpmiGroup,
        specifiedType: const FullType(int),
      );
    }
  }

  @override
  Object serialize(
    Serializers serializers,
    ServerLocation1 object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required ServerLocation1Builder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'location_id':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(int),
          ) as int;
          result.locationId = valueDes;
          break;
        case r'location_name':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.locationName = valueDes;
          break;
        case r'location_lat':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.locationLat = valueDes;
          break;
        case r'location_long':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.locationLong = valueDes;
          break;
        case r'location_description':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.locationDescription = valueDes;
          break;
        case r'location_ipmi_group':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(int),
          ) as int;
          result.locationIpmiGroup = valueDes;
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  ServerLocation1 deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = ServerLocation1Builder();
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

