package org.openapitools.model;


import io.swagger.annotations.ApiModelProperty;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;


public class PatchOauthTwoFactorRequest  {
  
 /**
  * The account ID returned from the POST callback.
  */
  @ApiModelProperty(required = true, value = "The account ID returned from the POST callback.")

  private Integer accountId;

 /**
  * The 6-digit two-factor authentication code.
  */
  @ApiModelProperty(required = true, value = "The 6-digit two-factor authentication code.")

  private String code;
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

  public PatchOauthTwoFactorRequest accountId(Integer accountId) {
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

  public PatchOauthTwoFactorRequest code(String code) {
    this.code = code;
    return this;
  }

  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    PatchOauthTwoFactorRequest patchOauthTwoFactorRequest = (PatchOauthTwoFactorRequest) o;
    return Objects.equals(this.accountId, patchOauthTwoFactorRequest.accountId) &&
        Objects.equals(this.code, patchOauthTwoFactorRequest.code);
  }

  @Override
  public int hashCode() {
    return Objects.hash(accountId, code);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class PatchOauthTwoFactorRequest {\n");
    
    sb.append("    accountId: ").append(toIndentedString(accountId)).append("\n");
    sb.append("    code: ").append(toIndentedString(code)).append("\n");
    sb.append("}");
    return sb.toString();
  }

  /**
   * Convert the given object to string with each line indented by 4 spaces
   * (except the first line).
   */
  private static String toIndentedString(Object o) {
    return o == null ? "null" : o.toString().replace("\n", "\n    ");
  }
}

