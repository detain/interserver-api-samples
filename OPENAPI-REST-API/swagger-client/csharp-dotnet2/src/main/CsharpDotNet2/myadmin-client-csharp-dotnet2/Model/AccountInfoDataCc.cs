using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.Serialization;
using Newtonsoft.Json;

namespace IO.Swagger.Model {

  /// <summary>
  /// Credit card information stored on the account.
  /// </summary>
  [DataContract]
  public class AccountInfoDataCc {
    /// <summary>
    /// Gets or Sets Cc
    /// </summary>
    [DataMember(Name="cc", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "cc")]
    public string Cc { get; set; }

    /// <summary>
    /// Gets or Sets CcExp
    /// </summary>
    [DataMember(Name="cc_exp", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "cc_exp")]
    public string CcExp { get; set; }

    /// <summary>
    /// Gets or Sets Name
    /// </summary>
    [DataMember(Name="name", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "name")]
    public string Name { get; set; }

    /// <summary>
    /// Gets or Sets Address
    /// </summary>
    [DataMember(Name="address", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "address")]
    public string Address { get; set; }

    /// <summary>
    /// Gets or Sets City
    /// </summary>
    [DataMember(Name="city", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "city")]
    public string City { get; set; }

    /// <summary>
    /// Gets or Sets State
    /// </summary>
    [DataMember(Name="state", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "state")]
    public string State { get; set; }

    /// <summary>
    /// Gets or Sets Zip
    /// </summary>
    [DataMember(Name="zip", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "zip")]
    public string Zip { get; set; }

    /// <summary>
    /// Gets or Sets Country
    /// </summary>
    [DataMember(Name="country", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "country")]
    public string Country { get; set; }

    /// <summary>
    /// Gets or Sets MaxmindRiskscore
    /// </summary>
    [DataMember(Name="maxmind_riskscore", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "maxmind_riskscore")]
    public string MaxmindRiskscore { get; set; }

    /// <summary>
    /// Gets or Sets Maxmind
    /// </summary>
    [DataMember(Name="maxmind", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "maxmind")]
    public AccountInfoMaxMindResponse Maxmind { get; set; }

    /// <summary>
    /// Gets or Sets Verified
    /// </summary>
    [DataMember(Name="verified", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "verified")]
    public bool? Verified { get; set; }


    /// <summary>
    /// Get the string presentation of the object
    /// </summary>
    /// <returns>String presentation of the object</returns>
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class AccountInfoDataCc {\n");
      sb.Append("  Cc: ").Append(Cc).Append("\n");
      sb.Append("  CcExp: ").Append(CcExp).Append("\n");
      sb.Append("  Name: ").Append(Name).Append("\n");
      sb.Append("  Address: ").Append(Address).Append("\n");
      sb.Append("  City: ").Append(City).Append("\n");
      sb.Append("  State: ").Append(State).Append("\n");
      sb.Append("  Zip: ").Append(Zip).Append("\n");
      sb.Append("  Country: ").Append(Country).Append("\n");
      sb.Append("  MaxmindRiskscore: ").Append(MaxmindRiskscore).Append("\n");
      sb.Append("  Maxmind: ").Append(Maxmind).Append("\n");
      sb.Append("  Verified: ").Append(Verified).Append("\n");
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
