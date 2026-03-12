//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_collection/built_collection.dart';
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'ticket_custom_field_details.g.dart';

/// Optional fields providing additional info in ticket
///
/// Properties:
/// * [customerServerAccess] 
/// * [ipAddress] 
/// * [rootPassword] 
/// * [sudoUser] 
/// * [sudoPassword] 
/// * [port] 
@BuiltValue()
abstract class TicketCustomFieldDetails implements Built<TicketCustomFieldDetails, TicketCustomFieldDetailsBuilder> {
  @BuiltValueField(wireName: r'Customer Server Access')
  TicketCustomFieldDetailsCustomerServerAccessEnum? get customerServerAccess;
  // enum customerServerAccessEnum {  y,  n,  };

  @BuiltValueField(wireName: r'Ip Address')
  String? get ipAddress;

  @BuiltValueField(wireName: r'Root Password')
  String? get rootPassword;

  @BuiltValueField(wireName: r'Sudo User')
  String? get sudoUser;

  @BuiltValueField(wireName: r'Sudo Password')
  int? get sudoPassword;

  @BuiltValueField(wireName: r'Port')
  int? get port;

  TicketCustomFieldDetails._();

  factory TicketCustomFieldDetails([void updates(TicketCustomFieldDetailsBuilder b)]) = _$TicketCustomFieldDetails;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(TicketCustomFieldDetailsBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<TicketCustomFieldDetails> get serializer => _$TicketCustomFieldDetailsSerializer();
}

class _$TicketCustomFieldDetailsSerializer implements PrimitiveSerializer<TicketCustomFieldDetails> {
  @override
  final Iterable<Type> types = const [TicketCustomFieldDetails, _$TicketCustomFieldDetails];

  @override
  final String wireName = r'TicketCustomFieldDetails';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    TicketCustomFieldDetails object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    if (object.customerServerAccess != null) {
      yield r'Customer Server Access';
      yield serializers.serialize(
        object.customerServerAccess,
        specifiedType: const FullType(TicketCustomFieldDetailsCustomerServerAccessEnum),
      );
    }
    if (object.ipAddress != null) {
      yield r'Ip Address';
      yield serializers.serialize(
        object.ipAddress,
        specifiedType: const FullType(String),
      );
    }
    if (object.rootPassword != null) {
      yield r'Root Password';
      yield serializers.serialize(
        object.rootPassword,
        specifiedType: const FullType(String),
      );
    }
    if (object.sudoUser != null) {
      yield r'Sudo User';
      yield serializers.serialize(
        object.sudoUser,
        specifiedType: const FullType(String),
      );
    }
    if (object.sudoPassword != null) {
      yield r'Sudo Password';
      yield serializers.serialize(
        object.sudoPassword,
        specifiedType: const FullType(int),
      );
    }
    if (object.port != null) {
      yield r'Port';
      yield serializers.serialize(
        object.port,
        specifiedType: const FullType(int),
      );
    }
  }

  @override
  Object serialize(
    Serializers serializers,
    TicketCustomFieldDetails object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required TicketCustomFieldDetailsBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'Customer Server Access':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(TicketCustomFieldDetailsCustomerServerAccessEnum),
          ) as TicketCustomFieldDetailsCustomerServerAccessEnum;
          result.customerServerAccess = valueDes;
          break;
        case r'Ip Address':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.ipAddress = valueDes;
          break;
        case r'Root Password':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.rootPassword = valueDes;
          break;
        case r'Sudo User':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.sudoUser = valueDes;
          break;
        case r'Sudo Password':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(int),
          ) as int;
          result.sudoPassword = valueDes;
          break;
        case r'Port':
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
  TicketCustomFieldDetails deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = TicketCustomFieldDetailsBuilder();
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

class TicketCustomFieldDetailsCustomerServerAccessEnum extends EnumClass {

  @BuiltValueEnumConst(wireName: r'y')
  static const TicketCustomFieldDetailsCustomerServerAccessEnum y = _$ticketCustomFieldDetailsCustomerServerAccessEnum_y;
  @BuiltValueEnumConst(wireName: r'n')
  static const TicketCustomFieldDetailsCustomerServerAccessEnum n = _$ticketCustomFieldDetailsCustomerServerAccessEnum_n;

  static Serializer<TicketCustomFieldDetailsCustomerServerAccessEnum> get serializer => _$ticketCustomFieldDetailsCustomerServerAccessEnumSerializer;

  const TicketCustomFieldDetailsCustomerServerAccessEnum._(String name): super(name);

  static BuiltSet<TicketCustomFieldDetailsCustomerServerAccessEnum> get values => _$ticketCustomFieldDetailsCustomerServerAccessEnumValues;
  static TicketCustomFieldDetailsCustomerServerAccessEnum valueOf(String name) => _$ticketCustomFieldDetailsCustomerServerAccessEnumValueOf(name);
}

