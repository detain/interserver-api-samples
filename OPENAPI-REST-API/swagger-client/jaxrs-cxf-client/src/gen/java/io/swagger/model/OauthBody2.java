package io.swagger.model;


import io.swagger.v3.oas.annotations.media.Schema;
import javax.xml.bind.annotation.XmlElement;
import javax.xml.bind.annotation.XmlRootElement;
import javax.xml.bind.annotation.XmlAccessType;
import javax.xml.bind.annotation.XmlAccessorType;
import javax.xml.bind.annotation.XmlType;
import javax.xml.bind.annotation.XmlEnum;
import javax.xml.bind.annotation.XmlEnumValue;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonValue;
import com.fasterxml.jackson.annotation.JsonCreator;

public class OauthBody2   {
  
  @Schema(required = true, description = "The account ID returned from the POST callback.")
 /**
   * The account ID returned from the POST callback.  
  **/
  private Integer accountId = null;
  
  @Schema(required = true, description = "The 6-digit two-factor authentication code.")
 /**
   * The 6-digit two-factor authentication code.  
  **/
  private String code = null;
 /**
   * The account ID returned from the POST callback.
   * @return accountId
  **/
  @JsonProperty("account_id")
  public Integer getAccountId() {
    return accountId;
  }

  public void setAccountId(Integer accountId) {
    this.accountId = accountId;
  }

  public OauthBody2 accountId(Integer accountId) {
    this.accountId = accountId;
    return this;
  }

 /**
   * The 6-digit two-factor authentication code.
   * @return code
  **/
  @JsonProperty("code")
  public String getCode() {
    return code;
  }

  public void setCode(String code) {
    this.code = code;
  }

  public OauthBody2 code(String code) {
    this.code = code;
    return this;
  }


  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class OauthBody2 {\n");
    
    sb.append("    accountId: ").append(toIndentedString(accountId)).append("\n");
    sb.append("    code: ").append(toIndentedString(code)).append("\n");
    sb.append("}");
    return sb.toString();
  }

  /**
   * Convert the given object to string with each line indented by 4 spaces
   * (except the first line).
   */
  private static String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}
