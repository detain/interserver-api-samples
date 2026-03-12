(ns inter-server-management-api.specs.mail-alerts-response-inner
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def mail-alerts-response-inner-data
  {
   (ds/opt :alert_id) int?
   (ds/opt :alert_type) string?
   (ds/opt :alert_value) string?
   (ds/opt :alert_to) string?
   (ds/opt :alert_enabled) string?
   })

(def mail-alerts-response-inner-spec
  (ds/spec
    {:name ::mail-alerts-response-inner
     :spec mail-alerts-response-inner-data}))
