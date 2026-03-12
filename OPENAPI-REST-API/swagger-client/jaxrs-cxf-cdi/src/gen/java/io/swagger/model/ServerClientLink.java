package io.swagger.model;

import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import javax.validation.constraints.*;

import io.swagger.v3.oas.annotations.media.Schema;
import java.util.Objects;

import javax.xml.bind.annotation.*;



public class ServerClientLink   {
  private String label = null;
  private String link = null;
  private String icon = null;
  private String iconText = null;
  private String helpText = null;

  /**
   **/
  public ServerClientLink label(String label) {
    this.label = label;
    return this;
  }

  
  
  @Schema(required = true, description = "")
  @JsonProperty("label")
  @NotNull
  public String getLabel() {
    return label;
  }
  public void setLabel(String label) {
    this.label = label;
  }

  /**
   **/
  public ServerClientLink link(String link) {
    this.link = link;
    return this;
  }

  
  
  @Schema(required = true, description = "")
  @JsonProperty("link")
  @NotNull
  public String getLink() {
    return link;
  }
  public void setLink(String link) {
    this.link = link;
  }

  /**
   **/
  public ServerClientLink icon(String icon) {
    this.icon = icon;
    return this;
  }

  
  
  @Schema(description = "")
  @JsonProperty("icon")
  @NotNull
  public String getIcon() {
    return icon;
  }
  public void setIcon(String icon) {
    this.icon = icon;
  }

  /**
   **/
  public ServerClientLink iconText(String iconText) {
    this.iconText = iconText;
    return this;
  }

  
  
  @Schema(description = "")
  @JsonProperty("icon_text")
  @NotNull
  public String getIconText() {
    return iconText;
  }
  public void setIconText(String iconText) {
    this.iconText = iconText;
  }

  /**
   **/
  public ServerClientLink helpText(String helpText) {
    this.helpText = helpText;
    return this;
  }

  
  
  @Schema(description = "")
  @JsonProperty("help_text")
  @NotNull
  public String getHelpText() {
    return helpText;
  }
  public void setHelpText(String helpText) {
    this.helpText = helpText;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    ServerClientLink serverClientLink = (ServerClientLink) o;
    return Objects.equals(label, serverClientLink.label) &&
        Objects.equals(link, serverClientLink.link) &&
        Objects.equals(icon, serverClientLink.icon) &&
        Objects.equals(iconText, serverClientLink.iconText) &&
        Objects.equals(helpText, serverClientLink.helpText);
  }

  @Override
  public int hashCode() {
    return Objects.hash(label, link, icon, iconText, helpText);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class ServerClientLink {\n");
    
    sb.append("    label: ").append(toIndentedString(label)).append("\n");
    sb.append("    link: ").append(toIndentedString(link)).append("\n");
    sb.append("    icon: ").append(toIndentedString(icon)).append("\n");
    sb.append("    iconText: ").append(toIndentedString(iconText)).append("\n");
    sb.append("    helpText: ").append(toIndentedString(helpText)).append("\n");
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
