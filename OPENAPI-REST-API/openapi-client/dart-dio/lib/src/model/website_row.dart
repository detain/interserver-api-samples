//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'website_row.g.dart';

/// A result row from the `Webhosting` `GET` request.
///
/// Properties:
/// * [websiteId] - The id of the website.
/// * [websiteHostname] - The hostname of the website.
/// * [repeatInvoicesCost] - The repeat invoices cost of the website.
/// * [websiteStatus] - The status of the website.
/// * [servicesName] - The services name of the website.
/// * [websiteComment] - The comment of the website.
@BuiltValue()
abstract class WebsiteRow implements Built<WebsiteRow, WebsiteRowBuilder> {
  /// The id of the website.
  @BuiltValueField(wireName: r'website_id')
  String get websiteId;

  /// The hostname of the website.
  @BuiltValueField(wireName: r'website_hostname')
  String get websiteHostname;

  /// The repeat invoices cost of the website.
  @BuiltValueField(wireName: r'repeat_invoices_cost')
  String get repeatInvoicesCost;

  /// The status of the website.
  @BuiltValueField(wireName: r'website_status')
  String get websiteStatus;

  /// The services name of the website.
  @BuiltValueField(wireName: r'services_name')
  String get servicesName;

  /// The comment of the website.
  @BuiltValueField(wireName: r'website_comment')
  String get websiteComment;

  WebsiteRow._();

  factory WebsiteRow([void updates(WebsiteRowBuilder b)]) = _$WebsiteRow;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(WebsiteRowBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<WebsiteRow> get serializer => _$WebsiteRowSerializer();
}

class _$WebsiteRowSerializer implements PrimitiveSerializer<WebsiteRow> {
  @override
  final Iterable<Type> types = const [WebsiteRow, _$WebsiteRow];

  @override
  final String wireName = r'WebsiteRow';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    WebsiteRow object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    yield r'website_id';
    yield serializers.serialize(
      object.websiteId,
      specifiedType: const FullType(String),
    );
    yield r'website_hostname';
    yield serializers.serialize(
      object.websiteHostname,
      specifiedType: const FullType(String),
    );
    yield r'repeat_invoices_cost';
    yield serializers.serialize(
      object.repeatInvoicesCost,
      specifiedType: const FullType(String),
    );
    yield r'website_status';
    yield serializers.serialize(
      object.websiteStatus,
      specifiedType: const FullType(String),
    );
    yield r'services_name';
    yield serializers.serialize(
      object.servicesName,
      specifiedType: const FullType(String),
    );
    yield r'website_comment';
    yield serializers.serialize(
      object.websiteComment,
      specifiedType: const FullType(String),
    );
  }

  @override
  Object serialize(
    Serializers serializers,
    WebsiteRow object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required WebsiteRowBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'website_id':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.websiteId = valueDes;
          break;
        case r'website_hostname':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.websiteHostname = valueDes;
          break;
        case r'repeat_invoices_cost':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.repeatInvoicesCost = valueDes;
          break;
        case r'website_status':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.websiteStatus = valueDes;
          break;
        case r'services_name':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.servicesName = valueDes;
          break;
        case r'website_comment':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.websiteComment = valueDes;
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  WebsiteRow deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = WebsiteRowBuilder();
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

