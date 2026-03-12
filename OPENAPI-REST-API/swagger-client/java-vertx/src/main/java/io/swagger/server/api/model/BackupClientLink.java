package io.swagger.server.api.model;

import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.v3.oas.annotations.media.Schema;
import io.vertx.core.json.JsonObject;
import io.vertx.codegen.annotations.DataObject;
/**
 * A navigation link for backup service actions in the client portal.
 */




public class BackupClientLink   {
  private String label = null;

  private String link = null;

  private String icon = null;

  private String iconText = null;

  private String helpText = null;

  private String otherAttr = null;

  public BackupClientLink label(String label) {
    this.label = label;
    return this;
  }

  /**
   * Label of the client link.
   * @return label
   **/
    public String getLabel() {
    return label;
  }

  public void setLabel(String label) {
    this.label = label;
  }

  public BackupClientLink link(String link) {
    this.link = link;
    return this;
  }

  /**
   * Link URL of the client link.
   * @return link
   **/
    public String getLink() {
    return link;
  }

  public void setLink(String link) {
    this.link = link;
  }

  public BackupClientLink icon(String icon) {
    this.icon = icon;
    return this;
  }

  /**
   * Icon of the client link.
   * @return icon
   **/
    public String getIcon() {
    return icon;
  }

  public void setIcon(String icon) {
    this.icon = icon;
  }

  public BackupClientLink iconText(String iconText) {
    this.iconText = iconText;
    return this;
  }

  /**
   * Icon text of the client link.
   * @return iconText
   **/
    public String getIconText() {
    return iconText;
  }

  public void setIconText(String iconText) {
    this.iconText = iconText;
  }

  public BackupClientLink helpText(String helpText) {
    this.helpText = helpText;
    return this;
  }

  /**
   * Help text of the client link.
   * @return helpText
   **/
    public String getHelpText() {
    return helpText;
  }

  public void setHelpText(String helpText) {
    this.helpText = helpText;
  }

  public BackupClientLink otherAttr(String otherAttr) {
    this.otherAttr = otherAttr;
    return this;
  }

  /**
   * Other attributes of the client link.
   * @return otherAttr
   **/
    public String getOtherAttr() {
    return otherAttr;
  }

  public void setOtherAttr(String otherAttr) {
    this.otherAttr = otherAttr;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    BackupClientLink backupClientLink = (BackupClientLink) o;
    return Objects.equals(this.label, backupClientLink.label) &&
        Objects.equals(this.link, backupClientLink.link) &&
        Objects.equals(this.icon, backupClientLink.icon) &&
        Objects.equals(this.iconText, backupClientLink.iconText) &&
        Objects.equals(this.helpText, backupClientLink.helpText) &&
        Objects.equals(this.otherAttr, backupClientLink.otherAttr);
  }

  @Override
  public int hashCode() {
    return Objects.hash(label, link, icon, iconText, helpText, otherAttr);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class BackupClientLink {\n");
    
    sb.append("    label: ").append(toIndentedString(label)).append("\n");
    sb.append("    link: ").append(toIndentedString(link)).append("\n");
    sb.append("    icon: ").append(toIndentedString(icon)).append("\n");
    sb.append("    iconText: ").append(toIndentedString(iconText)).append("\n");
    sb.append("    helpText: ").append(toIndentedString(helpText)).append("\n");
    sb.append("    otherAttr: ").append(toIndentedString(otherAttr)).append("\n");
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
