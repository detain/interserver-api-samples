using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.Serialization;
using Newtonsoft.Json;

namespace IO.Swagger.Model {

  /// <summary>
  /// 
  /// </summary>
  [DataContract]
  public class DomainProvProcessPendingAttributes {
    /// <summary>
    /// Gets or Sets Id
    /// </summary>
    [DataMember(Name="id", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "id")]
    public string Id { get; set; }

    /// <summary>
    /// Gets or Sets OrderId
    /// </summary>
    [DataMember(Name="order_id", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "order_id")]
    public string OrderId { get; set; }

    /// <summary>
    /// Gets or Sets RegistrationExpirationDate
    /// </summary>
    [DataMember(Name="registration expiration date", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "registration expiration date")]
    public string RegistrationExpirationDate { get; set; }

    /// <summary>
    /// Gets or Sets FAutoRenew
    /// </summary>
    [DataMember(Name="f_auto_renew", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "f_auto_renew")]
    public string FAutoRenew { get; set; }


    /// <summary>
    /// Get the string presentation of the object
    /// </summary>
    /// <returns>String presentation of the object</returns>
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class DomainProvProcessPendingAttributes {\n");
      sb.Append("  Id: ").Append(Id).Append("\n");
      sb.Append("  OrderId: ").Append(OrderId).Append("\n");
      sb.Append("  RegistrationExpirationDate: ").Append(RegistrationExpirationDate).Append("\n");
      sb.Append("  FAutoRenew: ").Append(FAutoRenew).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }

    /// <summary>
    /// Get the JSON string presentation of the object
    /// </summary>
    /// <returns>JSON string presentation of the object</returns>
    public string ToJson() {
      return JsonConvert.SerializeObject(this, Formatting.Indented);
    }

}
}
