package io.swagger.model;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.model.VpsOrderServiceTypes32;
import io.swagger.v3.oas.annotations.media.Schema;


/**
 * Service Types
 **/
@Schema(description = "Service Types")


public class VpsOrderServiceTypes   {
  @JsonProperty("32")
  private VpsOrderServiceTypes32 _32 = null;
  /**
   **/
  public VpsOrderServiceTypes _32(VpsOrderServiceTypes32 _32) {
    this._32 = _32;
    return this;
  }

  
  @Schema(description = "")
  @JsonProperty("32")
  public VpsOrderServiceTypes32 get32() {
    return _32;
  }
  public void set32(VpsOrderServiceTypes32 _32) {
    this._32 = _32;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    VpsOrderServiceTypes vpsOrderServiceTypes = (VpsOrderServiceTypes) o;
    return Objects.equals(_32, vpsOrderServiceTypes._32);
  }

  @Override
  public int hashCode() {
    return Objects.hash(_32);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class VpsOrderServiceTypes {\n");
    sb.append("    _32: ").append(toIndentedString(_32)).append("\n");
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
