//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'create_filter.g.dart';

/// Create firewall rule for your ip
///
/// Properties:
/// * [filterType] 
/// * [port] 
@BuiltValue()
abstract class CreateFilter implements Built<CreateFilter, CreateFilterBuilder> {
  @BuiltValueField(wireName: r'filter_type')
  String get filterType;

  @BuiltValueField(wireName: r'port')
  int get port;

  CreateFilter._();

  factory CreateFilter([void updates(CreateFilterBuilder b)]) = _$CreateFilter;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(CreateFilterBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<CreateFilter> get serializer => _$CreateFilterSerializer();
}

class _$CreateFilterSerializer implements PrimitiveSerializer<CreateFilter> {
  @override
  final Iterable<Type> types = const [CreateFilter, _$CreateFilter];

  @override
  final String wireName = r'CreateFilter';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    CreateFilter object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    yield r'filter_type';
    yield serializers.serialize(
      object.filterType,
      specifiedType: const FullType(String),
    );
    yield r'port';
    yield serializers.serialize(
      object.port,
      specifiedType: const FullType(int),
    );
  }

  @override
  Object serialize(
    Serializers serializers,
    CreateFilter object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required CreateFilterBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'filter_type':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.filterType = valueDes;
          break;
        case r'port':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(int),
          ) as int;
          result.port = valueDes;
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  CreateFilter deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = CreateFilterBuilder();
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

