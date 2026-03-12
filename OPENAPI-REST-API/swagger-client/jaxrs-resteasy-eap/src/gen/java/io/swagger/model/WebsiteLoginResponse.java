package io.swagger.model;

import java.util.Objects;
import java.util.ArrayList;
import java.util.HashMap;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.v3.oas.annotations.media.Schema;
import javax.validation.constraints.*;
import io.swagger.v3.oas.annotations.media.Schema;

@Schema(description="Response from a website login request.")

public class WebsiteLoginResponse   {
  private String type = null;
  private String location = null;

  /**
   **/
  
  @Schema(description = "")
  @JsonProperty("type")
  @NotNull
  public String getType() {
    return type;
  }
  public void setType(String type) {
    this.type = type;
  }

  /**
   **/
  
  @Schema(description = "")
  @JsonProperty("location")
  @NotNull
  public String getLocation() {
    return location;
  }
  public void setLocation(String location) {
    this.location = location;
  }


  @Override
  public boolean equals(Object o) {
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
  private String toIndentedString(Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}
