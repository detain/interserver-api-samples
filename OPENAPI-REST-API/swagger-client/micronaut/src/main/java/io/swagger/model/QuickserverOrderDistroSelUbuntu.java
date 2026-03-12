package io.swagger.model;

import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.v3.oas.annotations.media.Schema;
import io.micronaut.core.annotation.Introspected;
import io.micronaut.validation.Validated;
import javax.validation.Valid;
import javax.validation.constraints.*;

/**
 * QuickserverOrderDistroSelUbuntu
 */
@Validated
@Introspected

public class QuickserverOrderDistroSelUbuntu   {
  @JsonProperty("Ubuntu")
  private String ubuntu = null;

  public QuickserverOrderDistroSelUbuntu ubuntu(String ubuntu) {
    this.ubuntu = ubuntu;
    return this;
  }

  /**
   * Selected distribution for Ubuntu.
   * @return ubuntu
  **/
  @Schema(example = "Ubuntu", description = "Selected distribution for Ubuntu.")
  @NotNull

  public String getUbuntu() {
    return ubuntu;
  }

  public void setUbuntu(String ubuntu) {
    this.ubuntu = ubuntu;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    QuickserverOrderDistroSelUbuntu quickserverOrderDistroSelUbuntu = (QuickserverOrderDistroSelUbuntu) o;
    return Objects.equals(this.ubuntu, quickserverOrderDistroSelUbuntu.ubuntu);
  }

  @Override
  public int hashCode() {
    return Objects.hash(ubuntu);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class QuickserverOrderDistroSelUbuntu {\n");
    
    sb.append("    ubuntu: ").append(toIndentedString(ubuntu)).append("\n");
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
