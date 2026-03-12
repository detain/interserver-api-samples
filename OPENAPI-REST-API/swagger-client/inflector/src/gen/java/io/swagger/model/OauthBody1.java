package io.swagger.model;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.v3.oas.annotations.media.Schema;





public class OauthBody1   {
  @JsonProperty("provider")
  private String provider = null;
  /**
   * The OAuth provider name (e.g. `Google`).
   **/
  public OauthBody1 provider(String provider) {
    this.provider = provider;
    return this;
  }

  
  @Schema(description = "The OAuth provider name (e.g. `Google`).")
  @JsonProperty("provider")
  public String getProvider() {
    return provider;
  }
  public void setProvider(String provider) {
    this.provider = provider;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    OauthBody1 oauthBody1 = (OauthBody1) o;
    return Objects.equals(provider, oauthBody1.provider);
  }

  @Override
  public int hashCode() {
    return Objects.hash(provider);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class OauthBody1 {\n");
    sb.append("    provider: ").append(toIndentedString(provider)).append("\n");
    sb.append("}");
    return sb.toString();
  }

  /**
   * Convert the given object to string with each line indented by 4 spaces
   * (except the first line).
   */
  private String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}
