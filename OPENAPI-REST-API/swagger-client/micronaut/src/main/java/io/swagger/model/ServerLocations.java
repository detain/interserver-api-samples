package io.swagger.model;

import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.model.ServerLocation1;
import io.swagger.v3.oas.annotations.media.Schema;
import io.micronaut.core.annotation.Introspected;
import io.micronaut.validation.Validated;
import javax.validation.Valid;
import javax.validation.constraints.*;

/**
 * ServerLocations
 */
@Validated
@Introspected

public class ServerLocations   {
  @JsonProperty("1")
  private ServerLocation1 _1 = null;

  public ServerLocations _1(ServerLocation1 _1) {
    this._1 = _1;
    return this;
  }

  /**
   * Get _1
   * @return _1
  **/
  @Schema(description = "")
  @NotNull

  @Valid
  public ServerLocation1 get1() {
    return _1;
  }

  public void set1(ServerLocation1 _1) {
    this._1 = _1;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    ServerLocations serverLocations = (ServerLocations) o;
    return Objects.equals(this._1, serverLocations._1);
  }

  @Override
  public int hashCode() {
    return Objects.hash(_1);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class ServerLocations {\n");
    
    sb.append("    _1: ").append(toIndentedString(_1)).append("\n");
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
