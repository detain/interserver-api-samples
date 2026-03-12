package io.swagger.model;

import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.model.QuickserverOrderServerDetails381;
import io.swagger.v3.oas.annotations.media.Schema;
import javax.validation.Valid;
import javax.validation.constraints.*;
/**
 * Server details.
 **/
import io.swagger.v3.oas.annotations.media.Schema;
import java.util.Objects;

import javax.xml.bind.annotation.*;

@Schema(description = "Server details.")

public class QuickserverOrderServerDetails   {
  private QuickserverOrderServerDetails381 _381 = null;

  /**
   **/
  public QuickserverOrderServerDetails _381(QuickserverOrderServerDetails381 _381) {
    this._381 = _381;
    return this;
  }

  
  
  @Schema(description = "")
  @JsonProperty("381")
  @NotNull
  @Valid
  public QuickserverOrderServerDetails381 get381() {
    return _381;
  }
  public void set381(QuickserverOrderServerDetails381 _381) {
    this._381 = _381;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    QuickserverOrderServerDetails quickserverOrderServerDetails = (QuickserverOrderServerDetails) o;
    return Objects.equals(_381, quickserverOrderServerDetails._381);
  }

  @Override
  public int hashCode() {
    return Objects.hash(_381);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class QuickserverOrderServerDetails {\n");
    
    sb.append("    _381: ").append(toIndentedString(_381)).append("\n");
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
