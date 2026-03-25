package org.openapitools.model;


import io.swagger.annotations.ApiModelProperty;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;


public class GetOauthRedirect200Response  {
  
 /**
  * The URL to redirect the user to for OAuth authentication.
  */
  @ApiModelProperty(value = "The URL to redirect the user to for OAuth authentication.")

  private String redirectUrl;
 /**
   * The URL to redirect the user to for OAuth authentication.
   * @return redirectUrl
  **/
  @JsonProperty("redirect_url")
  public String getRedirectUrl() {
    return redirectUrl;
  }

  public void setRedirectUrl(String redirectUrl) {
    this.redirectUrl = redirectUrl;
  }

  public GetOauthRedirect200Response redirectUrl(String redirectUrl) {
    this.redirectUrl = redirectUrl;
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
    GetOauthRedirect200Response getOauthRedirect200Response = (GetOauthRedirect200Response) o;
    return Objects.equals(this.redirectUrl, getOauthRedirect200Response.redirectUrl);
  }

  @Override
  public int hashCode() {
    return Objects.hash(redirectUrl);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class GetOauthRedirect200Response {\n");
    
    sb.append("    redirectUrl: ").append(toIndentedString(redirectUrl)).append("\n");
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

