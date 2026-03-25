package org.openapitools.model;


import io.swagger.annotations.ApiModelProperty;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;


public class PostOauthCallbackRequest  {
  
 /**
  * The OAuth provider name (e.g. `Google`).
  */
  @ApiModelProperty(value = "The OAuth provider name (e.g. `Google`).")

  private String provider;
 /**
   * The OAuth provider name (e.g. &#x60;Google&#x60;).
   * @return provider
  **/
  @JsonProperty("provider")
  public String getProvider() {
    return provider;
  }

  public void setProvider(String provider) {
    this.provider = provider;
  }

  public PostOauthCallbackRequest provider(String provider) {
    this.provider = provider;
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
    PostOauthCallbackRequest postOauthCallbackRequest = (PostOauthCallbackRequest) o;
    return Objects.equals(this.provider, postOauthCallbackRequest.provider);
  }

  @Override
  public int hashCode() {
    return Objects.hash(provider);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class PostOauthCallbackRequest {\n");
    
    sb.append("    provider: ").append(toIndentedString(provider)).append("\n");
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

