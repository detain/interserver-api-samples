(ns inter-server-management-api.specs.servers-cancel-200-response
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def servers-cancel-200-response-data
  {
   (ds/req :success) boolean?
   (ds/req :text) string?
   })

(def servers-cancel-200-response-spec
  (ds/spec
    {:name ::servers-cancel-200-response
     :spec servers-cancel-200-response-data}))
