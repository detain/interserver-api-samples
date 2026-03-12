(ns inter-server-management-api.specs.template-request
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def template-request-data
  {
   (ds/req :template) string?
   (ds/req :localPassword) string?
   (ds/opt :password) string?
   })

(def template-request-spec
  (ds/spec
    {:name ::template-request
     :spec template-request-data}))
