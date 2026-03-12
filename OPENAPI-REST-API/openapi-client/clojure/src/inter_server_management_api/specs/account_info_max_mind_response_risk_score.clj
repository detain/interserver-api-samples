(ns inter-server-management-api.specs.account-info-max-mind-response-risk-score
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def account-info-max-mind-response-risk-score-data
  {
   })

(def account-info-max-mind-response-risk-score-spec
  (ds/spec
    {:name ::account-info-max-mind-response-risk-score
     :spec account-info-max-mind-response-risk-score-data}))
