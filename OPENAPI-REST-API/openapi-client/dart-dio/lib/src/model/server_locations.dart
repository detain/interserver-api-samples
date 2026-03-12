//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:openapi/src/model/server_location1.dart';
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'server_locations.g.dart';

/// ServerLocations
///
/// Properties:
/// * [n1] 
@BuiltValue()
abstract class ServerLocations implements Built<ServerLocations, ServerLocationsBuilder> {
  @BuiltValueField(wireName: r'1')
  ServerLocation1? get n1;

  ServerLocations._();

  factory ServerLocations([void updates(ServerLocationsBuilder b)]) = _$ServerLocations;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(ServerLocationsBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<ServerLocations> get serializer => _$ServerLocationsSerializer();
}

class _$ServerLocationsSerializer implements PrimitiveSerializer<ServerLocations> {
  @override
  final Iterable<Type> types = const [ServerLocations, _$ServerLocations];

  @override
  final String wireName = r'ServerLocations';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    ServerLocations object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    if (object.n1 != null) {
      yield r'1';
      yield serializers.serialize(
        object.n1,
        specifiedType: const FullType(ServerLocation1),
      );
    }
  }

  @override
  Object serialize(
    Serializers serializers,
    ServerLocations object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required ServerLocationsBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'1':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(ServerLocation1),
          ) as ServerLocation1;
          result.n1.replace(valueDes);
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  ServerLocations deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = ServerLocationsBuilder();
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

