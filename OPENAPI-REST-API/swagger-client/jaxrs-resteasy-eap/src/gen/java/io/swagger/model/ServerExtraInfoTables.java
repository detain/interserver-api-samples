package io.swagger.model;

import java.util.Objects;
import java.util.ArrayList;
import java.util.HashMap;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.model.ServerAssets;
import javax.validation.constraints.*;
import io.swagger.v3.oas.annotations.media.Schema;



public class ServerExtraInfoTables   {
  private ServerAssets assets = null;

  /**
   **/
  
  @Schema(required = true, description = "")
  @JsonProperty("assets")
  @NotNull
  public ServerAssets getAssets() {
    return assets;
  }
  public void setAssets(ServerAssets assets) {
    this.assets = assets;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    ServerExtraInfoTables serverExtraInfoTables = (ServerExtraInfoTables) o;
    return Objects.equals(assets, serverExtraInfoTables.assets);
  }

  @Override
  public int hashCode() {
    return Objects.hash(assets);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class ServerExtraInfoTables {\n");
    
    sb.append("    assets: ").append(toIndentedString(assets)).append("\n");
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
