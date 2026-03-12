//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'website_backups_inner.g.dart';

/// WebsiteBackupsInner
///
/// Properties:
/// * [name] 
/// * [size] 
@BuiltValue()
abstract class WebsiteBackupsInner implements Built<WebsiteBackupsInner, WebsiteBackupsInnerBuilder> {
  @BuiltValueField(wireName: r'name')
  String get name;

  @BuiltValueField(wireName: r'size')
  int? get size;

  WebsiteBackupsInner._();

  factory WebsiteBackupsInner([void updates(WebsiteBackupsInnerBuilder b)]) = _$WebsiteBackupsInner;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(WebsiteBackupsInnerBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<WebsiteBackupsInner> get serializer => _$WebsiteBackupsInnerSerializer();
}

class _$WebsiteBackupsInnerSerializer implements PrimitiveSerializer<WebsiteBackupsInner> {
  @override
  final Iterable<Type> types = const [WebsiteBackupsInner, _$WebsiteBackupsInner];

  @override
  final String wireName = r'WebsiteBackupsInner';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    WebsiteBackupsInner object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    yield r'name';
    yield serializers.serialize(
      object.name,
      specifiedType: const FullType(String),
    );
    if (object.size != null) {
      yield r'size';
      yield serializers.serialize(
        object.size,
        specifiedType: const FullType(int),
      );
    }
  }

  @override
  Object serialize(
    Serializers serializers,
    WebsiteBackupsInner object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required WebsiteBackupsInnerBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'name':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.name = valueDes;
          break;
        case r'size':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(int),
          ) as int;
          result.size = valueDes;
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  WebsiteBackupsInner deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = WebsiteBackupsInnerBuilder();
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

