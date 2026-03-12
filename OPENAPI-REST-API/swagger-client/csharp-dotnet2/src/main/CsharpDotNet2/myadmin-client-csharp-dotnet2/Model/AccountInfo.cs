using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.Serialization;
using Newtonsoft.Json;

namespace IO.Swagger.Model {

  /// <summary>
  /// Contains the full account profile including personal info, billing details, OAuth connections, and security settings.
  /// </summary>
  [DataContract]
  public class AccountInfo {
    /// <summary>
    /// Gets or Sets Custid
    /// </summary>
    [DataMember(Name="custid", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "custid")]
    public string Custid { get; set; }

    /// <summary>
    /// Gets or Sets Ima
    /// </summary>
    [DataMember(Name="ima", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "ima")]
    public string Ima { get; set; }

    /// <summary>
    /// Gets or Sets Data
    /// </summary>
    [DataMember(Name="data", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "data")]
    public AccountInfoData Data { get; set; }

    /// <summary>
    /// Gets or Sets Ip
    /// </summary>
    [DataMember(Name="ip", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "ip")]
    public string Ip { get; set; }

    /// <summary>
    /// Gets or Sets Oauthproviders
    /// </summary>
    [DataMember(Name="oauthproviders", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "oauthproviders")]
    public OneOfAccountInfoOauthproviders Oauthproviders { get; set; }

    /// <summary>
    /// Gets or Sets Oauthconfig
    /// </summary>
    [DataMember(Name="oauthconfig", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "oauthconfig")]
    public AccountInfoOauthConfig Oauthconfig { get; set; }

    /// <summary>
    /// Gets or Sets Oauthadapters
    /// </summary>
    [DataMember(Name="oauthadapters", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "oauthadapters")]
    public List<string> Oauthadapters { get; set; }

    /// <summary>
    /// Gets or Sets Limits
    /// </summary>
    [DataMember(Name="limits", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "limits")]
    public AccountInfoLimits Limits { get; set; }

    /// <summary>
    /// Gets or Sets Language
    /// </summary>
    [DataMember(Name="language", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "language")]
    public string Language { get; set; }

    /// <summary>
    /// Gets or Sets CountryCurrencies
    /// </summary>
    [DataMember(Name="countryCurrencies", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "countryCurrencies")]
    public AccountInfoCountryCurrencies CountryCurrencies { get; set; }

    /// <summary>
    /// Gets or Sets EnableLocales
    /// </summary>
    [DataMember(Name="enableLocales", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "enableLocales")]
    public bool? EnableLocales { get; set; }

    /// <summary>
    /// Gets or Sets EnableCurrencies
    /// </summary>
    [DataMember(Name="enableCurrencies", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "enableCurrencies")]
    public bool? EnableCurrencies { get; set; }

    /// <summary>
    /// Gets or Sets Gravatar
    /// </summary>
    [DataMember(Name="gravatar", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "gravatar")]
    public string Gravatar { get; set; }


    /// <summary>
    /// Get the string presentation of the object
    /// </summary>
    /// <returns>String presentation of the object</returns>
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class AccountInfo {\n");
      sb.Append("  Custid: ").Append(Custid).Append("\n");
      sb.Append("  Ima: ").Append(Ima).Append("\n");
      sb.Append("  Data: ").Append(Data).Append("\n");
      sb.Append("  Ip: ").Append(Ip).Append("\n");
      sb.Append("  Oauthproviders: ").Append(Oauthproviders).Append("\n");
      sb.Append("  Oauthconfig: ").Append(Oauthconfig).Append("\n");
      sb.Append("  Oauthadapters: ").Append(Oauthadapters).Append("\n");
      sb.Append("  Limits: ").Append(Limits).Append("\n");
      sb.Append("  Language: ").Append(Language).Append("\n");
      sb.Append("  CountryCurrencies: ").Append(CountryCurrencies).Append("\n");
      sb.Append("  EnableLocales: ").Append(EnableLocales).Append("\n");
      sb.Append("  EnableCurrencies: ").Append(EnableCurrencies).Append("\n");
      sb.Append("  Gravatar: ").Append(Gravatar).Append("\n");
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
