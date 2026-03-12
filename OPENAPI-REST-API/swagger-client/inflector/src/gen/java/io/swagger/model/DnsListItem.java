package io.swagger.model;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.v3.oas.annotations.media.Schema;


/**
 * A DNS zone entry with its ID, domain name, and record content.
 **/
@Schema(description = "A DNS zone entry with its ID, domain name, and record content.")


public class DnsListItem   {
  @JsonProperty("id")
  private Integer id = null;
  @JsonProperty("name")
  private String name = null;
  @JsonProperty("content")
  private String content = null;
  /**
   **/
  public DnsListItem id(Integer id) {
    this.id = id;
    return this;
  }

  
  @Schema(description = "")
  @JsonProperty("id")
  public Integer getId() {
    return id;
  }
  public void setId(Integer id) {
    this.id = id;
  }

  /**
   **/
  public DnsListItem name(String name) {
    this.name = name;
    return this;
  }

  
  @Schema(description = "")
  @JsonProperty("name")
  public String getName() {
    return name;
  }
  public void setName(String name) {
    this.name = name;
  }

  /**
   **/
  public DnsListItem content(String content) {
    this.content = content;
    return this;
  }

  
  @Schema(description = "")
  @JsonProperty("content")
  public String getContent() {
    return content;
  }
  public void setContent(String content) {
    this.content = content;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    DnsListItem dnsListItem = (DnsListItem) o;
    return Objects.equals(id, dnsListItem.id) &&
        Objects.equals(name, dnsListItem.name) &&
        Objects.equals(content, dnsListItem.content);
  }

  @Override
  public int hashCode() {
    return Objects.hash(id, name, content);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class DnsListItem {\n");
    sb.append("    id: ").append(toIndentedString(id)).append("\n");
    sb.append("    name: ").append(toIndentedString(name)).append("\n");
    sb.append("    content: ").append(toIndentedString(content)).append("\n");
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
