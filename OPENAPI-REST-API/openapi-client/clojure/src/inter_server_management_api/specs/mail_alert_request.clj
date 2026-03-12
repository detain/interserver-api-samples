(ns inter-server-management-api.specs.mail-alert-request
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def mail-alert-request-data
  {
   (ds/opt :type) string?
   (ds/opt :value) string?
   (ds/opt :to) string?
   (ds/opt :enabled) string?
   })

(def mail-alert-request-spec
  (ds/spec
    {:name ::mail-alert-request
     :spec mail-alert-request-data}))
