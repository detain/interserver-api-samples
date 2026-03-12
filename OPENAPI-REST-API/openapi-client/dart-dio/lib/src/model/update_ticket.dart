//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_collection/built_collection.dart';
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'update_ticket.g.dart';

/// Update custom fields of the ticket
///
/// Properties:
/// * [ip] 
/// * [ipAddress] 
/// * [customerServerAccess] 
/// * [rootPassword] 
/// * [sudoUsername] 
/// * [sudoPassword] 
/// * [port] 
@BuiltValue()
abstract class UpdateTicket implements Built<UpdateTicket, UpdateTicketBuilder> {
  @BuiltValueField(wireName: r'ip')
  String? get ip;

  @BuiltValueField(wireName: r'ip_address')
  String? get ipAddress;

  @BuiltValueField(wireName: r'customer_server_access')
  UpdateTicketCustomerServerAccessEnum? get customerServerAccess;
  // enum customerServerAccessEnum {  y,  n,  };

  @BuiltValueField(wireName: r'root_password')
  String? get rootPassword;

  @BuiltValueField(wireName: r'sudo_username')
  String? get sudoUsername;

  @BuiltValueField(wireName: r'sudo_password')
  String? get sudoPassword;

  @BuiltValueField(wireName: r'port')
  int? get port;

  UpdateTicket._();

  factory UpdateTicket([void updates(UpdateTicketBuilder b)]) = _$UpdateTicket;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(UpdateTicketBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<UpdateTicket> get serializer => _$UpdateTicketSerializer();
}

class _$UpdateTicketSerializer implements PrimitiveSerializer<UpdateTicket> {
  @override
  final Iterable<Type> types = const [UpdateTicket, _$UpdateTicket];

  @override
  final String wireName = r'UpdateTicket';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    UpdateTicket object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    if (object.ip != null) {
      yield r'ip';
      yield serializers.serialize(
        object.ip,
        specifiedType: const FullType(String),
      );
    }
    if (object.ipAddress != null) {
      yield r'ip_address';
      yield serializers.serialize(
        object.ipAddress,
        specifiedType: const FullType(String),
      );
    }
    if (object.customerServerAccess != null) {
      yield r'customer_server_access';
      yield serializers.serialize(
        object.customerServerAccess,
        specifiedType: const FullType(UpdateTicketCustomerServerAccessEnum),
      );
    }
    if (object.rootPassword != null) {
      yield r'root_password';
      yield serializers.serialize(
        object.rootPassword,
        specifiedType: const FullType(String),
      );
    }
    if (object.sudoUsername != null) {
      yield r'sudo_username';
      yield serializers.serialize(
        object.sudoUsername,
        specifiedType: const FullType(String),
      );
    }
    if (object.sudoPassword != null) {
      yield r'sudo_password';
      yield serializers.serialize(
        object.sudoPassword,
        specifiedType: const FullType(String),
      );
    }
    if (object.port != null) {
      yield r'port';
      yield serializers.serialize(
        object.port,
        specifiedType: const FullType(int),
      );
    }
  }

  @override
  Object serialize(
    Serializers serializers,
    UpdateTicket object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required UpdateTicketBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'ip':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.ip = valueDes;
          break;
        case r'ip_address':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.ipAddress = valueDes;
          break;
        case r'customer_server_access':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(UpdateTicketCustomerServerAccessEnum),
          ) as UpdateTicketCustomerServerAccessEnum;
          result.customerServerAccess = valueDes;
          break;
        case r'root_password':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.rootPassword = valueDes;
          break;
        case r'sudo_username':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.sudoUsername = valueDes;
          break;
        case r'sudo_password':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.sudoPassword = valueDes;
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
  UpdateTicket deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = UpdateTicketBuilder();
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

class UpdateTicketCustomerServerAccessEnum extends EnumClass {

  @BuiltValueEnumConst(wireName: r'y')
  static const UpdateTicketCustomerServerAccessEnum y = _$updateTicketCustomerServerAccessEnum_y;
  @BuiltValueEnumConst(wireName: r'n')
  static const UpdateTicketCustomerServerAccessEnum n = _$updateTicketCustomerServerAccessEnum_n;

  static Serializer<UpdateTicketCustomerServerAccessEnum> get serializer => _$updateTicketCustomerServerAccessEnumSerializer;

  const UpdateTicketCustomerServerAccessEnum._(String name): super(name);

  static BuiltSet<UpdateTicketCustomerServerAccessEnum> get values => _$updateTicketCustomerServerAccessEnumValues;
  static UpdateTicketCustomerServerAccessEnum valueOf(String name) => _$updateTicketCustomerServerAccessEnumValueOf(name);
}

