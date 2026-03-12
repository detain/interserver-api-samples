package io.swagger.model;

import java.util.Objects;
import java.util.ArrayList;
import java.util.HashMap;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.v3.oas.annotations.media.Schema;
import javax.validation.constraints.*;
import io.swagger.v3.oas.annotations.media.Schema;

@Schema(description="Map of VPS service IDs to their hostnames for the account dashboard.")

public class HomeServicesVpsLinks   {
  private String _465503 = null;
  private String _2500081 = null;
  private String _2578866 = null;

  /**
   * Link to a VPS.
   **/
  
  @Schema(example = "vps465503", description = "Link to a VPS.")
  @JsonProperty("465503")
  @NotNull
  public String get465503() {
    return _465503;
  }
  public void set465503(String _465503) {
    this._465503 = _465503;
  }

  /**
   * Link to a VPS.
   **/
  
  @Schema(example = "vps2500081", description = "Link to a VPS.")
  @JsonProperty("2500081")
  @NotNull
  public String get2500081() {
    return _2500081;
  }
  public void set2500081(String _2500081) {
    this._2500081 = _2500081;
  }

  /**
   * Link to a VPS.
   **/
  
  @Schema(example = "vps2578866", description = "Link to a VPS.")
  @JsonProperty("2578866")
  @NotNull
  public String get2578866() {
    return _2578866;
  }
  public void set2578866(String _2578866) {
    this._2578866 = _2578866;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    HomeServicesVpsLinks homeServicesVpsLinks = (HomeServicesVpsLinks) o;
    return Objects.equals(_465503, homeServicesVpsLinks._465503) &&
        Objects.equals(_2500081, homeServicesVpsLinks._2500081) &&
        Objects.equals(_2578866, homeServicesVpsLinks._2578866);
  }

  @Override
  public int hashCode() {
    return Objects.hash(_465503, _2500081, _2578866);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class HomeServicesVpsLinks {\n");
    
    sb.append("    _465503: ").append(toIndentedString(_465503)).append("\n");
    sb.append("    _2500081: ").append(toIndentedString(_2500081)).append("\n");
    sb.append("    _2578866: ").append(toIndentedString(_2578866)).append("\n");
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
