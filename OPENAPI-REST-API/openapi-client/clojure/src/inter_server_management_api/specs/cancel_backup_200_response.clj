(ns inter-server-management-api.specs.cancel-backup-200-response
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def cancel-backup-200-response-data
  {
   (ds/req :success) boolean?
   (ds/req :text) string?
   })

(def cancel-backup-200-response-spec
  (ds/spec
    {:name ::cancel-backup-200-response
     :spec cancel-backup-200-response-data}))
