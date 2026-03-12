(ns inter-server-management-api.specs.quickservers-cancel-200-response
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def quickservers-cancel-200-response-data
  {
   (ds/req :success) boolean?
   (ds/req :text) string?
   })

(def quickservers-cancel-200-response-spec
  (ds/spec
    {:name ::quickservers-cancel-200-response
     :spec quickservers-cancel-200-response-data}))
