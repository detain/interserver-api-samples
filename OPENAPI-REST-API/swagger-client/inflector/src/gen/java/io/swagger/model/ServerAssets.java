package io.swagger.model;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.v3.oas.annotations.media.Schema;
import java.util.ArrayList;
import java.util.List;





public class ServerAssets   {
  @JsonProperty("title")
  private String title = null;
  @JsonProperty("size")
  private Integer size = null;
  @JsonProperty("type")
  private String type = null;
  @JsonProperty("header")
  private List<String> header = null;
  @JsonProperty("rows")
  private List<List<String>> rows = null;
  /**
   * The title of the assets.
   **/
  public ServerAssets title(String title) {
    this.title = title;
    return this;
  }

  
  @Schema(example = "Assets", description = "The title of the assets.")
  @JsonProperty("title")
  public String getTitle() {
    return title;
  }
  public void setTitle(String title) {
    this.title = title;
  }

  /**
   * The size of the assets.
   **/
  public ServerAssets size(Integer size) {
    this.size = size;
    return this;
  }

  
  @Schema(example = "2", description = "The size of the assets.")
  @JsonProperty("size")
  public Integer getSize() {
    return size;
  }
  public void setSize(Integer size) {
    this.size = size;
  }

  /**
   * The type of the assets.
   **/
  public ServerAssets type(String type) {
    this.type = type;
    return this;
  }

  
  @Schema(example = "table", description = "The type of the assets.")
  @JsonProperty("type")
  public String getType() {
    return type;
  }
  public void setType(String type) {
    this.type = type;
  }

  /**
   * The header of the assets table.
   **/
  public ServerAssets header(List<String> header) {
    this.header = header;
    return this;
  }

  
  @Schema(description = "The header of the assets table.")
  @JsonProperty("header")
  public List<String> getHeader() {
    return header;
  }
  public void setHeader(List<String> header) {
    this.header = header;
  }

  /**
   * The rows of the assets table.
   **/
  public ServerAssets rows(List<List<String>> rows) {
    this.rows = rows;
    return this;
  }

  
  @Schema(description = "The rows of the assets table.")
  @JsonProperty("rows")
  public List<List<String>> getRows() {
    return rows;
  }
  public void setRows(List<List<String>> rows) {
    this.rows = rows;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    ServerAssets serverAssets = (ServerAssets) o;
    return Objects.equals(title, serverAssets.title) &&
        Objects.equals(size, serverAssets.size) &&
        Objects.equals(type, serverAssets.type) &&
        Objects.equals(header, serverAssets.header) &&
        Objects.equals(rows, serverAssets.rows);
  }

  @Override
  public int hashCode() {
    return Objects.hash(title, size, type, header, rows);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class ServerAssets {\n");
    sb.append("    title: ").append(toIndentedString(title)).append("\n");
    sb.append("    size: ").append(toIndentedString(size)).append("\n");
    sb.append("    type: ").append(toIndentedString(type)).append("\n");
    sb.append("    header: ").append(toIndentedString(header)).append("\n");
    sb.append("    rows: ").append(toIndentedString(rows)).append("\n");
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
