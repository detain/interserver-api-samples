(ns inter-server-management-api.specs.ssl-cancel-200-response
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def ssl-cancel-200-response-data
  {
   (ds/req :success) boolean?
   (ds/req :text) string?
   })

(def ssl-cancel-200-response-spec
  (ds/spec
    {:name ::ssl-cancel-200-response
     :spec ssl-cancel-200-response-data}))
