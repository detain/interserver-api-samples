//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:openapi/src/model/mail_service_type.dart';
import 'package:built_collection/built_collection.dart';
import 'package:openapi/src/model/mail_service_info.dart';
import 'package:openapi/src/model/mail_billing_details.dart';
import 'package:openapi/src/model/mail_schema_extra_info_tables.dart';
import 'package:openapi/src/model/mail_client_link.dart';
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'mail_schema.g.dart';

/// MailSchema
///
/// Properties:
/// * [serviceInfo] 
/// * [clientLinks] - Links related to the mail service for clients.
/// * [billingDetails] 
/// * [custCurrency] - The customer's currency.
/// * [custCurrencySymbol] - The currency symbol for the customer.
/// * [package] - The package of the mail service.
/// * [extraInfoTables] 
/// * [serviceType] 
/// * [usageCount] - The usage count of the mail service.
/// * [serviceExtra] - Extra information for the mail service.
@BuiltValue()
abstract class MailSchema implements Built<MailSchema, MailSchemaBuilder> {
  @BuiltValueField(wireName: r'serviceInfo')
  MailServiceInfo get serviceInfo;

  /// Links related to the mail service for clients.
  @BuiltValueField(wireName: r'client_links')
  BuiltList<MailClientLink> get clientLinks;

  @BuiltValueField(wireName: r'billingDetails')
  MailBillingDetails get billingDetails;

  /// The customer's currency.
  @BuiltValueField(wireName: r'custCurrency')
  String get custCurrency;

  /// The currency symbol for the customer.
  @BuiltValueField(wireName: r'custCurrencySymbol')
  String get custCurrencySymbol;

  /// The package of the mail service.
  @BuiltValueField(wireName: r'package')
  String get package;

  @BuiltValueField(wireName: r'extraInfoTables')
  MailSchemaExtraInfoTables get extraInfoTables;

  @BuiltValueField(wireName: r'serviceType')
  MailServiceType get serviceType;

  /// The usage count of the mail service.
  @BuiltValueField(wireName: r'usage_count')
  String get usageCount;

  /// Extra information for the mail service.
  @BuiltValueField(wireName: r'serviceExtra')
  BuiltList<String>? get serviceExtra;

  MailSchema._();

  factory MailSchema([void updates(MailSchemaBuilder b)]) = _$MailSchema;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(MailSchemaBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<MailSchema> get serializer => _$MailSchemaSerializer();
}

class _$MailSchemaSerializer implements PrimitiveSerializer<MailSchema> {
  @override
  final Iterable<Type> types = const [MailSchema, _$MailSchema];

  @override
  final String wireName = r'MailSchema';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    MailSchema object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    yield r'serviceInfo';
    yield serializers.serialize(
      object.serviceInfo,
      specifiedType: const FullType(MailServiceInfo),
    );
    yield r'client_links';
    yield serializers.serialize(
      object.clientLinks,
      specifiedType: const FullType(BuiltList, [FullType(MailClientLink)]),
    );
    yield r'billingDetails';
    yield serializers.serialize(
      object.billingDetails,
      specifiedType: const FullType(MailBillingDetails),
    );
    yield r'custCurrency';
    yield serializers.serialize(
      object.custCurrency,
      specifiedType: const FullType(String),
    );
    yield r'custCurrencySymbol';
    yield serializers.serialize(
      object.custCurrencySymbol,
      specifiedType: const FullType(String),
    );
    yield r'package';
    yield serializers.serialize(
      object.package,
      specifiedType: const FullType(String),
    );
    yield r'extraInfoTables';
    yield serializers.serialize(
      object.extraInfoTables,
      specifiedType: const FullType(MailSchemaExtraInfoTables),
    );
    yield r'serviceType';
    yield serializers.serialize(
      object.serviceType,
      specifiedType: const FullType(MailServiceType),
    );
    yield r'usage_count';
    yield serializers.serialize(
      object.usageCount,
      specifiedType: const FullType(String),
    );
    if (object.serviceExtra != null) {
      yield r'serviceExtra';
      yield serializers.serialize(
        object.serviceExtra,
        specifiedType: const FullType(BuiltList, [FullType(String)]),
      );
    }
  }

  @override
  Object serialize(
    Serializers serializers,
    MailSchema object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required MailSchemaBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'serviceInfo':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(MailServiceInfo),
          ) as MailServiceInfo;
          result.serviceInfo.replace(valueDes);
          break;
        case r'client_links':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(BuiltList, [FullType(MailClientLink)]),
          ) as BuiltList<MailClientLink>;
          result.clientLinks.replace(valueDes);
          break;
        case r'billingDetails':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(MailBillingDetails),
          ) as MailBillingDetails;
          result.billingDetails.replace(valueDes);
          break;
        case r'custCurrency':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.custCurrency = valueDes;
          break;
        case r'custCurrencySymbol':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.custCurrencySymbol = valueDes;
          break;
        case r'package':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.package = valueDes;
          break;
        case r'extraInfoTables':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(MailSchemaExtraInfoTables),
          ) as MailSchemaExtraInfoTables;
          result.extraInfoTables.replace(valueDes);
          break;
        case r'serviceType':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(MailServiceType),
          ) as MailServiceType;
          result.serviceType.replace(valueDes);
          break;
        case r'usage_count':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.usageCount = valueDes;
          break;
        case r'serviceExtra':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(BuiltList, [FullType(String)]),
          ) as BuiltList<String>;
          result.serviceExtra.replace(valueDes);
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  MailSchema deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = MailSchemaBuilder();
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

