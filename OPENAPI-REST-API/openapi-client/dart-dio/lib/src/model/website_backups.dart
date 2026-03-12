//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_collection/built_collection.dart';
import 'package:openapi/src/model/website_backups_inner.dart';
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'website_backups.g.dart';

/// List of available backups for a webhosting service with their names and sizes.
@BuiltValue()
abstract class WebsiteBackups implements Built<WebsiteBackups, WebsiteBackupsBuilder> {
  WebsiteBackups._();

  factory WebsiteBackups([void updates(WebsiteBackupsBuilder b)]) = _$WebsiteBackups;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(WebsiteBackupsBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<WebsiteBackups> get serializer => _$WebsiteBackupsSerializer();
}

class _$WebsiteBackupsSerializer implements PrimitiveSerializer<WebsiteBackups> {
  @override
  final Iterable<Type> types = const [WebsiteBackups, _$WebsiteBackups];

  @override
  final String wireName = r'WebsiteBackups';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    WebsiteBackups object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
  }

  @override
  Object serialize(
    Serializers serializers,
    WebsiteBackups object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  @override
  WebsiteBackups deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = WebsiteBackupsBuilder();
    final serializedList = (serialized as Iterable<Object?>).toList();
    return result.build();
  }
}

