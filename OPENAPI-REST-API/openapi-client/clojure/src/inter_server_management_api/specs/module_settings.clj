(ns inter-server-management-api.specs.module-settings
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def module-settings-data
  {
   (ds/req :SERVICE_ID_OFFSET) int?
   (ds/req :USE_REPEAT_INVOICE) boolean?
   (ds/req :USE_PACKAGES) boolean?
   (ds/req :BILLING_DAYS_OFFSET) int?
   (ds/req :IMGNAME) string?
   (ds/req :REPEAT_BILLING_METHOD) int?
   (ds/req :DELETE_PENDING_DAYS) int?
   (ds/req :SUSPEND_DAYS) int?
   (ds/req :SUSPEND_WARNING_DAYS) int?
   (ds/req :TITLE) string?
   (ds/req :MENUNAME) string?
   (ds/req :EMAIL_FROM) string?
   (ds/req :TBLNAME) string?
   (ds/req :TABLE) string?
   (ds/req :TITLE_FIELD) string?
   (ds/req :PREFIX) string?
   (ds/opt :TITLE_FIELD2) string?
   (ds/opt :TITLE_FIELD3) string?
   })

(def module-settings-spec
  (ds/spec
    {:name ::module-settings
     :spec module-settings-data}))
