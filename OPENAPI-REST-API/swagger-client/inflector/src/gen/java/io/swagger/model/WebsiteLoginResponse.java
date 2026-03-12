package io.swagger.model;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.v3.oas.annotations.media.Schema;


/**
 * Response from a website login request.
 **/
@Schema(description = "Response from a website login request.")


public class WebsiteLoginResponse   {
  @JsonProperty("type")
  private String type = null;
  @JsonProperty("location")
  private String location = null;
  /**
   **/
  public WebsiteLoginResponse type(String type) {
    this.type = type;
    return this;
  }

  
  @Schema(description = "")
  @JsonProperty("type")
  public String getType() {
    return type;
  }
  public void setType(String type) {
    this.type = type;
  }

  /**
   **/
  public WebsiteLoginResponse location(String location) {
    this.location = location;
    return this;
  }

  
  @Schema(description = "")
  @JsonProperty("location")
  public String getLocation() {
    return location;
  }
  public void setLocation(String location) {
    this.location = location;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    WebsiteLoginResponse websiteLoginResponse = (WebsiteLoginResponse) o;
    return Objects.equals(type, websiteLoginResponse.type) &&
        Objects.equals(location, websiteLoginResponse.location);
  }

  @Override
  public int hashCode() {
    return Objects.hash(type, location);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class WebsiteLoginResponse {\n");
    sb.append("    type: ").append(toIndentedString(type)).append("\n");
    sb.append("    location: ").append(toIndentedString(location)).append("\n");
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
