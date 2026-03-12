package io.swagger.model;

import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.model.WebsitesOrderServiceTypes;
import io.swagger.v3.oas.annotations.media.Schema;
import javax.validation.Valid;
import javax.validation.constraints.*;
/**
 * The service types data.
 **/
import io.swagger.v3.oas.annotations.media.Schema;
import java.util.Objects;

import javax.xml.bind.annotation.*;

@Schema(description = "The service types data.")

public class WebsitesOrderServiceTypes   {
  private WebsitesOrderServiceTypes _11447 = null;

  /**
   **/
  public WebsitesOrderServiceTypes _11447(WebsitesOrderServiceTypes _11447) {
    this._11447 = _11447;
    return this;
  }

  
  
  @Schema(required = true, description = "")
  @JsonProperty("11447")
  @NotNull
  @Valid
  public WebsitesOrderServiceTypes get11447() {
    return _11447;
  }
  public void set11447(WebsitesOrderServiceTypes _11447) {
    this._11447 = _11447;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    WebsitesOrderServiceTypes websitesOrderServiceTypes = (WebsitesOrderServiceTypes) o;
    return Objects.equals(_11447, websitesOrderServiceTypes._11447);
  }

  @Override
  public int hashCode() {
    return Objects.hash(_11447);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class WebsitesOrderServiceTypes {\n");
    
    sb.append("    _11447: ").append(toIndentedString(_11447)).append("\n");
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
