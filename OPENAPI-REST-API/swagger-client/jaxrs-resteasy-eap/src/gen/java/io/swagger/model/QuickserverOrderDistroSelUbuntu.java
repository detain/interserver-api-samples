package io.swagger.model;

import java.util.Objects;
import java.util.ArrayList;
import java.util.HashMap;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import javax.validation.constraints.*;
import io.swagger.v3.oas.annotations.media.Schema;



public class QuickserverOrderDistroSelUbuntu   {
  private String ubuntu = null;

  /**
   * Selected distribution for Ubuntu.
   **/
  
  @Schema(example = "Ubuntu", description = "Selected distribution for Ubuntu.")
  @JsonProperty("Ubuntu")
  @NotNull
  public String getUbuntu() {
    return ubuntu;
  }
  public void setUbuntu(String ubuntu) {
    this.ubuntu = ubuntu;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    QuickserverOrderDistroSelUbuntu quickserverOrderDistroSelUbuntu = (QuickserverOrderDistroSelUbuntu) o;
    return Objects.equals(ubuntu, quickserverOrderDistroSelUbuntu.ubuntu);
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
  private String toIndentedString(Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}
