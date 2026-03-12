(ns inter-server-management-api.specs.mail-alert-update-request
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def mail-alert-update-request-data
  {
   (ds/opt :alert_id) int?
   (ds/opt :type) string?
   (ds/opt :value) string?
   (ds/opt :to) string?
   (ds/opt :enabled) string?
   })

(def mail-alert-update-request-spec
  (ds/spec
    {:name ::mail-alert-update-request
     :spec mail-alert-update-request-data}))
