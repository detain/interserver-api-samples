package org.openapitools.model;


import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;

/**
 * Map of VPS service IDs to their hostnames for the account dashboard.
 */
@ApiModel(description="Map of VPS service IDs to their hostnames for the account dashboard.")

public class HomeServicesVpsLinks  {
  
 /**
  * Link to a VPS.
  */
  @ApiModelProperty(example = "vps465503", value = "Link to a VPS.")

  private String _465503;

 /**
  * Link to a VPS.
  */
  @ApiModelProperty(example = "vps2500081", value = "Link to a VPS.")

  private String _2500081;

 /**
  * Link to a VPS.
  */
  @ApiModelProperty(example = "vps2578866", value = "Link to a VPS.")

  private String _2578866;
 /**
   * Link to a VPS.
   * @return _465503
  **/
  @JsonProperty("465503")
  public String get465503() {
    return _465503;
  }

  public void set465503(String _465503) {
    this._465503 = _465503;
  }

  public HomeServicesVpsLinks _465503(String _465503) {
    this._465503 = _465503;
    return this;
  }

 /**
   * Link to a VPS.
   * @return _2500081
  **/
  @JsonProperty("2500081")
  public String get2500081() {
    return _2500081;
  }

  public void set2500081(String _2500081) {
    this._2500081 = _2500081;
  }

  public HomeServicesVpsLinks _2500081(String _2500081) {
    this._2500081 = _2500081;
    return this;
  }

 /**
   * Link to a VPS.
   * @return _2578866
  **/
  @JsonProperty("2578866")
  public String get2578866() {
    return _2578866;
  }

  public void set2578866(String _2578866) {
    this._2578866 = _2578866;
  }

  public HomeServicesVpsLinks _2578866(String _2578866) {
    this._2578866 = _2578866;
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
    HomeServicesVpsLinks homeServicesVpsLinks = (HomeServicesVpsLinks) o;
    return Objects.equals(this._465503, homeServicesVpsLinks._465503) &&
        Objects.equals(this._2500081, homeServicesVpsLinks._2500081) &&
        Objects.equals(this._2578866, homeServicesVpsLinks._2578866);
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
  private static String toIndentedString(Object o) {
    return o == null ? "null" : o.toString().replace("\n", "\n    ");
  }
}

